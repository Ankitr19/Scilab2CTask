**SCILAB2C PROJECT**
In the following repo you will be seeing two files:
1. interp1.c
2. generateHeaderFile.sci

Description of the files:-
1.interp1.c:-->
	This is a convert of the interp1 function of the scilab in C language. This is an 
        interpolation function for a "single row matrix input".
	I have used the "direct method" for finding the "interpolation". Given a single row 
        matrix input for x,y and xp, we find the output yp which 
	be of the same length as of xp.In the direct method, let us we have a function:
	y=f(x)=(a0)+(a1*x)+(a2*x*x)+(a3*x*x*x)+......+(an*x*x*x....n-times)
	Now we take two setsof data (x1,y1) and (x2,y2)
	y1=a0+a1*x1
	y2=a0+a1*x2
	Now solving the above two equations gives us:-
	a1=(y2-y1)/(x2-x1)
	and, a0=y1-(a1*x1)
	Now for a given random value of xp we can find the corresponding yp value.

2.generateHeaderFile.sci:-->
	This is a "Scilab code", which generates the "header file". The input in the 
        "generateHeaderFile" are as follows:-
	a)functionName
	b)argumnets
	c)returnType
	The code reads the input and generates the header file with the same name as the 
        "functionName", return type as "returnType",
	in case of argument, the code is a little bit strict it checks whether the entered 
        "arguments" are a valid data type or not, if
	valid then it stores the argument in a string, and in this manner it goes on until all 
        the arguments are inputed.
	Now the header file is created and the content inside it is written by the "mputl" 
        command.The working is checked to be correct if
	"1" is printed in the end.


I have taken the refernce from "Spoken-Tutorial" on interpolation for the test cases. The direct method which I have used was described in "Wikipedia"
in the topic "numerical interpolation methods". I learned a lot from this project , since Scilab is a new thing for me. The scilab2c toolkit is great,
since I have studied C language and it is very interesting to see the transformations going on. 

Created by:-
Ankit Raj
2nd year, B.Tech
Electronics and Communication Engineering
NIT Agartala