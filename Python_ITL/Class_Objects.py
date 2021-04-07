class Student:
	_id = ''
	name = ''
	age = 0
	English = 0
	Maths = 0
	Science = 0
	total = 0
	percentage = 0
	status = ''
	grade = ''

	def getData(self):
		print("***"*20)
		print("Enter details of Student:")
		self._id = input("ID: ")
		self.name = input("Name: ")
		self.age = input("Age: ")
		print("Enter Subect Marks")
		self.English = int(input("English: "))
		self.Maths = int(input("Maths: "))
		self.Science = int(input("Science: "))
		self.total = self.getTotal(self.English, self.Maths, self.Science)
		self.percentage = self.getPerc(self.total, 300)
		self.status = self.getStatus(self.English, self.Maths, self.Science)
		self.grade = self.getGrade(self.percentage)

	def getTotal(self, English, Maths, Science):
		return English + Maths + Science

	def getPerc(self, totalScore, totalMarks):
		return int((totalScore/totalMarks)*100)
	
	def getStatus(self, English, Maths, Science):
		if(English>=50 and Maths>=50 and Science>=50):
			return "Pass"
		else:
			return "Fail"

	def getGrade(self, percentage):
		if(percentage>=75):
			return "A"
		elif(percentage>=60 or percentage<=75):
			return "B"
		elif(percentage>=50 or percentage<=60):
			return "C"
		else:
			return " "

	def display(self):
		print("***"*10)
		print(" ID: {}\n Name: {}\n Age: {}\n".format(self._id, self.name, self.age))
		print(" Marks Obtained")
		print(" English: {}\n Maths: {}\n Science: {}\n".format(self.English, self.Maths, self.Science))
		print(" Total Marks Obtaied: {}".format(self.total))
		print(" Percentage: {}".format(self.percentage))
		print(" Status: {}".format(self.status))
		print(" Grade: {}".format(self.grade))
	

if __name__ == "__main__":
	std = Student()
	std.getData()
	std.display()

