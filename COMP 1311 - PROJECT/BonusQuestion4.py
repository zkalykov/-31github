import csv
def read_tweets_data(csv_file):
    with open(csv_file, 'r') as f:
        reader = csv.reader(f)
        next(reader)

        tweets = []
        for row in reader:
            tweet = {
                'TweetID': row[0],
                'Weekday': row[1],
                'Hour': row[2],
                'Day': row[3],
                'Lang': row[4],
                'IsReshare': row[5],
                'Reach': row[6],
                'RetweetC': row[7],
                'Likes': row[8],
                'Klout': row[9],
                'Sentimen': row[10],
                'text': row[11],
                'LocationID': row[12],
                'UserID': row[13]
            }
            tweets.append(tweet)
    return tweets

tweets = read_tweets_data('Tweets_Data.csv')

mentions = []
links = []
hashtags = []
popular = []
retweets = []
cnt = {}

def work():
    for i in tweets:
        tx = i['text']
        men = 0
        mn = ""

        for j_int in range(0, len(tx)):
            j = tx[j_int]

            if j == '@' and men == 0:
                mn += j
                men = 1
            if men == 1 and j == ':':
                xx = {mn: tx}
                retweets.append(xx)
                mn = ""
                men = 0
            if men > 0:
                mn += j
            if men == 1 and j == ' ':
                mentions.append(mn)
                men = 0
                mn = ""

            # now for hashtags and popular ones
            if men == 0 and j == '#':
                mn += j
                men = 2
            if men == 2 and j == ' ':
                if mn not in cnt:
                    cnt[mn] = 0
                cnt[mn] += 1
                hashtags.append(mn)
                mn = ""
                men = 0
            if men == 2 and j != ' ':
                mn += j

            # links
            if j_int < len(tx) - 4 and tx[j_int] == 'h' and tx[j_int + 1] == 't' and tx[j_int + 2] == 't' and tx[j_int + 3] == 'p':
                men = 3
                mn = "h"
            if men == 3 and j != ' ':
                mn += j
            if men == 3 and j == ' ':
                links.append(mn)
                mn = ""
                men = 0

work()
mx_num=9999999*-1
mx_str=""
for x,i in cnt.items():
    if mx_num<i:
        mx_num=i
        mx_str=x 

print("Popular hashtag:",mx_str,'With mentioned times:',mx_num,'\n\n')
print("Mentions:", mentions,'\n\n')
print("Links:", links,'\n\n')
print("Hashtags:", hashtags,'\n\n')
print("Retweets:", retweets,'\n\n')
print("Counts:", cnt,'\n\n')
