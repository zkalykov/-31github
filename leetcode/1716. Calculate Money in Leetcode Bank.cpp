class Solution {
public:
    int totalMoney(int n) {
      int w=n/7;
      int rem=n%7;
      int t=((w*(w-1))/2)*7;
      t+=w*28;
      t+=((rem*(rem+1))/2)+(w*rem);
      
      return t;
    }
};