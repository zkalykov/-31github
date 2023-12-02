class Employee:
	def __init__(self,name,e_number):
		self.name=name
		self.e_number=e_number
	def get_name(self):
		return self.name 

	def get_employee_number(self):
		return self.e_number
	def set_name(self,name):
		self.name=name 
	def set_employee_number(self,e_number):
		self.e_number=e_number

class ProductionWorker(Employee):
	def __init__(self,name,e_number,shift,hpr):
		Employee.__init__(self,name,e_number)
		self.shift=shift
		self.hpr=hpr 
	def set_shift(self,shift):
		self.shift=shift
	def get_shift(self):
		return self.shift 
	def set_hpr(self,hpr):
		self.hpr=hpr 
	def hpr(self):
		return self.hpr 

worker=ProductionWorker("","",0,0)
name=str(input("Enter Employee number : "))
e_number=str(input("Enter Employee number : "))
shift=str(input("Enter 'day' or 'night' shifts : "))
hpr=str(input("Enter an Hour pay rate : "))

worker.set_name(name)
worker.set_employee_number(e_number)
worker.set_shift(shift)
worker.set_hpr(hpr) 

print("Here is information about Employer : ")
print(f"Name : {worker.get_name()}")
print(f"Employer Number : {worker.get_employee_number()}")
print(f"Shift : {worker.get_shift()}")
print(f"Hourly paid rate : {worker.get_hpr()}")






