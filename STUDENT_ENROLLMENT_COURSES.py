class enrollment:
    def __init__(self,studentname,age):
        self.studentname=studentname
        self.age=age
    def printenrollment(self):
        print(self.studentname)
    def course(self,subject):
        if subject==1:
            name=input("pls enter ur name:")
            n=input("enter ur last name:")
            print("_______________________________")
            print("I",name)
            print("welcome to the c programing")
            print("******************************")
            college=(input("enter the college name:"))
            address=(input("enter ur address"))
            phone=int(input("pls enter ur 10 digit phone number:"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 2000:"))
            if amount==2000:
                         print("<<<<<<< congrats ur enrollment is succesfull >>>>>>") 
            else:
                print("sorry invalid amount.....!")
        elif subject==2:
            name=input("pls enter ur first name:")
            n=input("enter ur last name:")
            print("________________________________________")
            print("I",name)
            print("welcome to the java programing")
            print("******************************") 
            college=(input("enter the college name:"))
            address=(input("enter ur address:"))
            phone=int(input("pls enter ur phone number:-"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 5000:-"))
            if amount==5000:
                         print("<<<<<<<<< congrats ur enrollment is succesfull >>>>>>>") 
            else:
                print("sorry invalid amount.....!")
        elif subject==3:
            name=input("pls enter ur first name:")
            n=input("enter ur last name")
            print("I",name)
            print("___________________________________________")
            print("welcome to the python programing")
            college=(input("enter the college name:"))
            address=(input("enter ur address:"))
            phone=int(input("pls enter ur phone number:-"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 9000:"))
            if amount==9000:
                         print("<<<<<< congrats ur enrollment is succesfull >>>>>>>>") 
            else:
                print("sorry invalid amount.....!")
        elif subject==4:
            name=input("pls enter ur first name:")
            n=input("enter ur last name:")
            print("I",name)
            print("_________________________________________")
            print("welcome to the Ruby programing")
            print("******************************") 
            college=(input("enter the college name:"))
            address=(input("enter ur address:"))
            phone=int(input("pls enter ur phone number:-"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 3000:"))
            if amount==3000:
                         print("<<<<<<<<<<<< congrats ur enrollment is succesfull>>>>>>>>>") 
            else:
                print("sorry invalid amount.....!")
        elif subject==5:
            name=input("pls enter ur first name:")
            n=input("enter ur last name:")
            print("I",name) 
            print("welcome to the c# programing")
            print("******************************")
            college=(input("enter the college name:"))
            address=(input("enter ur address:"))
            phone=int(input("pls enter ur phone number:-"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 2000:"))
            if amount==2000:
                         print("<<<<<<<<< congrats ur enrollment is succesfull >>>>>>>>>>") 
            else:
                print("sorry invalid amount.....!")
        elif subject==6:
            name=input("pls enter ur first name:")
            n=input("enter ur last name")
            print("I",name)
            print("__________________________")
            print("welcome to the HTML web-programing")
            print("******************************")
            college=(input("enter the college name:"))
            address=(input("enter ur address:"))
            phone=int(input("pls enter ur phone number:-"))
            print(college)
            print(address)
            print(phone)
            amount=int(input("pls pay the amounnt 4000:"))
            if amount==4000:
                         print("<<<<<< congrats ur enrollment is succesfull >>>>>>>>>") 
            else:
                print("sorry invalid amount.....!") 
            
s=enrollment("Rohith",18)
#s=printenrollment()
print("WELCOME TO THE RTL SOLUTIONS...!")
print("please select your course")
print("for 'c' choose 1")
print("for 'java' choose 2")
print("for 'python' choose 3")
print("for 'Ruby' choose 4")
print("for 'c#' choose 5")
print("for 'HTML' choose 6")
print("***************************")
subject=int(input("choose ur course:-"))
print(s.course(subject))
 
                        
           
                
    
        
