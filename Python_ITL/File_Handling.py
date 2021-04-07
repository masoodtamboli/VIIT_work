#Function to take name and age of 10 students and save it to a file and display it

def fileHandling():
	for i in range(1,11):
		name = input('Enter name of {} student: '.format(i))
		age = input('Enter age of {} student: '.format(i))

		with open('userDetails.txt','a') as writer:
			writer.write('{}  {} \n'.format(name,age))

	with open('userDetails.txt') as reader:
		data = reader.readlines()
		for j in data:
			print(j)

#Function to create CSV files and read CSV files and replacing null values
def PandasCSV():
	import pandas as pd
	#Creating CSV File
	stdData = pd.DataFrame([['Masood','Michigan'], ['Devesh'], ['Shekhar','California'], ['Rohit','New York']], columns=['Name','Cities'])
	stdData.to_csv('StudentsData.csv', index=False)

	#Reading CSV File
	df = pd.read_csv('StudentsData.csv')
	print(df)

	print("==="*10)

	#Checking for Null Values and replacing it with data
	df['Cities'].fillna("Las Vegas", inplace=True)
	print(df)

if __name__ == "__main__":
	fileHandling()
	PandasCSV()
