# -banking-system
# Account class ===>description of class 

- Create Account class.
- Create balance and account number attributes in account class (private not public)
- Create a prametarize constructor that sets the account number and the initial balance value.
- Create setter and getter for each attribute
- Create methods withdraw and deposit to be able to take or put money. To withdraw, 
enough balance should be available.
- Create another class SpecialAccount that inherits from class Account.
 Use polymorphism to override method withdraw to allow over drafting with maximum limit of 1000 LE.


 # Client class====>description of class 
- Add name, nationalID, address, phone and account private attributes for 
the class.
- Create a prametarize constructor that sets these attributes. (Note that before creating a new 
Client, you will need to create an object of type Account and pass it as a parameter 
to the client object’s constructor to be his account).
- Create setter and getter for each attribute.
- Create another class CommercialClient that inherits from class Client. A 
commercial client is a company not a person. It has an extra attribute commercialID 
and setter and getter for it. Its NationalID is set to 00000000000000.

# Bank class===>description of class

- Create Bank class.
- Create name, address and phone attributes in Bank class.
- Create a constructor and suitable setters and getters.
-  Create an Vector of accounts in Bank class, this array maintains all accounts’ data.
- Create an Vector of clients in Bank class, this array maintains all clients’ data.
-Create methods to (1) add a new client and his account (can be special client or commercial 
account also)
(2) display existing clients and their accounts. Each time a new client and 
account are created, they are added to the two ArrayLists of accounts and clients.

# main test ===> description of this file 
Integrate your Bank class with Client and Account classes and use them in it.
Write in  main class to create two clients of two types and test all the functions you created 
in them.
Write in main class to test class Account. It should create two accounts of two types and 
test all the functions you created in the





