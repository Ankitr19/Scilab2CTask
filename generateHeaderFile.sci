//created by
//Ankit Raj
//B.Tech ECE 2nd year,NIT Agartala
//E-mail:-rajankit510@gmail.com

//I have created the function generateHeaderFile
//Decription:-This function takes a function name, arguments and a return type as input.
//And it creates a header file in the working directory of the Scilab for the function whose details have been provided by the user as the function argumnets for generateHeaderFile function

//Below is the code

function generateHeaderFile(functionName, arguments, returnType)              //Declaration of the function generateHeaderFile
    ct=size(arguments)                                                        //taking the number of arguments in ct
    m=ct(1,2);
    
    ct=0;                                                                     //now using ct as a counter
    
    //In this section we are using a for-loop to check whether the user entered argument is a data type or not, only the data type argumnets will be in the C header file
    for(n=1 : 1 : m)
        readip=arguments(1,n)
        
        if(readip=='char' | readip=='char*' | readip=='int' | readip=='int*' | readip=='long int' | readip=='float' | readip=='uint8' | readip=='unit16' | readip=='uint32')
            ct=ct+1
            arg(1,ct)=readip
            continue
        else
            continue
        end
    end
    
    //creating a string to store all the valid data type argumnets
    //and initialising the string with the first argument
    ar=arg(1,1)
    for(n=2:1:ct)
        ar=ar+ "," +arg(1,n)
    end
    functionDeclaration=returnType+" "+functionName+" "+"("+ar+")";
    
    
    //Now we create a C header file with the same name as the functionName and with a .h extension in the current working directory. And the content of the string functionDeclaration will
    //be printed in the newly generated file.
    r=mputl(functionDeclaration,functionName+".h");
    if(r==%T)                                           //We are using r as a test as to whether mputl function worked correctly.
        c=1;
    else
        c=1;
    end
    printf("%d",c);
endfunction
//If in the console we give the command "generateHeaderFile('AnkitCheck',['uint8', 'x', 'float', 'f', 'long int', 's'],'int')" will create a C header file AnkitCheck.h in the current working directory.The content of the file "AnkitCheck.h" will be:
//int AnkitCheck(int,float,long int)
