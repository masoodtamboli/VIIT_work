//Write a program to create a file, add records and display the records in console

import java.io.*;
import java.io.IOException;
import java.util.*;

public class StudentsDataBase{

    public static Scanner sc = new Scanner(System.in);
    
    public static void createFile(String fileName){
        try{
            File myFile = new File(fileName);
            if(myFile.createNewFile()){
                System.out.println("File Created");
            }else{
                System.out.println("File already exists please use different name");
            }
        }catch(Exception e){
            System.out.println("Error: "+e);
        }
    }
    
    public static void writeFile(String fileName, String rollNo, String name, String div){
        try{
            FileWriter myWriter = new FileWriter(fileName, true);
            String studentsData = rollNo+" "+name+" "+div+"\r\n";
            myWriter.append(studentsData);
            myWriter.close();

        }catch(Exception e){
            
        }
    }

    public static void modifiedFile(String fileName, String newContent){
        try{
            FileWriter myWriter = new FileWriter(fileName);
            myWriter.write(newContent);
            myWriter.close();
        }catch(Exception e){

        }
    }

    public static void display(String fileName){
        try{
            File myFile = new File(fileName);
            BufferedReader br = new BufferedReader(new FileReader(myFile));
            String data;

            while((data = br.readLine()) != null){
                System.out.println(data);
            }
        }catch(Exception e){
            System.out.println("Error: "+e);
        }
    }

    //Update anything in file

    public static void updateFile(String fileName, String rollNo){
        try{
            File myFile = new File(fileName);
            BufferedReader br = new BufferedReader(new FileReader(myFile));
            String data = br.readLine();
            String oldContent = "";

             while(data != null){
                
                oldContent = oldContent + data + System.lineSeparator();
                data = br.readLine();
                
            }

            System.out.println("Enter what you have to replace with what \nfor e.g Replace 'Masood' with 'Gaurav'");
            System.out.println("Enter String 1:");
            String str = sc.nextLine();
            System.out.println("Enter String 2:");
            String str2 = sc.nextLine();
            String newContent = oldContent.replaceAll(str,str2);
            System.out.println(newContent);
            modifiedFile("updated_DB.txt",newContent);
            
        }catch(Exception e){
            System.out.println(e);
        }
    }

     public static void main(String []args){

        while(true){
            System.out.println("Select :");
            System.out.println("1. Create File");
            System.out.println("2. Write File");
            System.out.println("3. Modify File");
            System.out.println("4. Display File");
            System.out.println("5. Exit");
            int val = sc.nextInt();
            switch(val){
                case 1: createFile("DB.txt");
                        break;
                case 2: writeFile("DB.txt", "01", "Masood", "C");
                        writeFile("DB.txt", "02", "Devesh", "C");
                        writeFile("DB.txt", "03", "Shekhar", "C");
                        writeFile("DB.txt", "04", "Rohit", "C");
                        break;
                case 3: updateFile("DB.txt", "01");
                        break;
                case 4: display("DB.txt");
                        break;
                case 5: System.exit(0);
                        break;
            }     
        }           
     }
}


