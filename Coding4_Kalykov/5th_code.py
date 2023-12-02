Library 
- name : String
- location : String

+ add_book(b: Book): void 
+ remove_book(b: Book): void
+ find_book(title: String): Book

Book
- title: String 
- author: String
- author: String 
- availability: boolean
+ check_availability(): boolean
+ get_details(): String

Member
- name: String
- member_id: String
+ borrow_book(b: Book): void 
+ return_book(b: Book): void

I think from above you can easily understand