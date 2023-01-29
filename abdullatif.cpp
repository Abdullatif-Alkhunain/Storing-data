
#include <iostream>

#include <cmath>

#include <fstream>
using namespace std;

int Menu(){
    int input;
    
    
    cout << "\n::Menu::\n"
         << "Enter 1 for simple math\n"
         << "Enter 2 for quadratic equation\n"
         << "Enter 3 to calculate volume\n"
         << "Enter 4 to calculate area\n"
         << "enter 5 to calculate the average\n"
         << "enter 6 to calculate the factorial\n"
         << "Enter 7 to determinate \n"
         << "Enter 8 to exit \n"
         << "Enter Your Choice";

    cin >> input;
    
    return input;
    
}

double simplemath(){
    double value1; 
    double value2; 
    double result; 
    char a; 
    cout << "Enter a number then a operator and then another number e.g \n1+1, 1*1, 1/1, 1-1 (* + / -) \a \n";
    
    cin >> value1; 
    cin >> a; 
    cin >> value2; 
    ofstream aas;
    aas.open ("results.txt",ios::app);
    switch (a) 
    { 
        case '*': 
        { 
            result = value1 * value2; 
      cout << "\n Last calculation for simple math Result = "<< result;
      aas << "\n Last calculation for simple math Result = "<< result;
            break; 
        } 

        case '+': 
        { 
            result = value1 + value2; 
      cout << "\n Last calculation for simple math Result = "<< result;
      aas << "\n Last calculation for simple math Result = "<< result;
            break; 
        } 

        case '-': 
        { 
            result = value1 - value2; 
      cout << "\n Last calculation for simple math Result = "<< result;
            break; 
        } 

        case '/': 
        { 
            result = value1 / value2; 
      cout << "\n Last calculation for simple math Result = "<< result;
      aas << "\n Last calculation for simple math Result = "<< result;
            break; 
        } 

        default: 
        { 
            cout << "Try Again please"; 
            break; 
        } 
    }
    }

void quadratic(){
	ofstream aaq;
	aaq.open ("results.txt",ios::app);
    float a,b,c;
    cout << "Please Enter coefficients a, b and c: respectively ";
    cin >>a;
    cin >>b;
    cin >>c;
    float det;
    det=b*b - 4*a*c;
    if (det > 0) {
        float x1 = (-b + sqrt(det)) / (2*a);
        float x2 = (-b - sqrt(det)) / (2*a);
        cout << "x1 = \n" << x1 ;
        cout << " x2 = " << x2 ;
        aaq <<"x1 = " << x1;
        aaq <<" x2 = " <<x2 <<endl;
    }
    else if(det ==0){
        float x1 = (-b + sqrt(det)) / (2*a);
        cout << "x1 = x2 =" << x1;
        aaq << "x1 = x2 =" << x1 ;
    }
    else{
        cout << "Roots are complex \n";
        aaq << "Roots are complex \n";
        
    }
    
}
void Volume(){
    int choice;
    long double result;
     ofstream aav;
     aav.open ("results.txt",ios::app);

    cout << "\n::Menu::\n"
         << "Enter 1 for cylinder\n"
         << "Enter 2 for Sphere\n"
         << "Enter 3 for Cone\n"
         << "Enter 5 to exit \n"
         << "Enter Your Choice";
    cin >> choice;
    switch (choice){
        case 1:
        {
          long double radius;
          long double height;
          
          cout << "Please enter the cylinder's radius: \n";
          cin >> radius;
          cout << "\nPlease enter the cylinder's height: \n";
          cin >> height;
          result = acos(-1) * radius * radius * height;
          cout << "cylinder's volume is " << result <<endl;
          aav <<"the cylindes's volume = " << result <<endl;

		  break;
        }
        case 2:
        {
         long double radius;
          cout << "Please enter the Sphere radius: \n";
          cin >> radius;
          result = (4.0/3.0) * 3.141596 * radius * radius * radius;
          aav << "the shere volume = " <<result << endl;
		  cout << "Sphere's volume is " << result << endl;
          break;
          

        }
        case 3 :
        {
          long double radius;
          long double height;
                     cout << "Please enter the cone radius: \n";
                     cin >> radius;
                     cout << "Please enter the cone height: \n";
                     cin >> height;
           result = 3.141596 * radius * radius * (height/3);
           cout << "cone's volume is " << result << endl; 
           aav <<"the con's volume = " << result << endl;
           break; 

        }
         default: 
        { 
            cout << "Try Again please \n"; 
            break; 
        } 
    }
    
    
}

void Area(){
    int choice;
    long double result;
    ofstream aaa;
    aaa.open ("results.txt",ios::app);
    cout << "\n::Menu::\n"
         << "Enter 1 for cylinder\n"
         << "Enter 2 for Sphere\n"
         << "Enter 3 for Cone\n"
         << "Enter 5 to exit \n"
         << "Enter Your Choice";
    cin >> choice;
    switch (choice){
        case 1:
        {
          long double radius;
          long double height;
          
          cout << "Please enter the cylinder's radius: \n";
          cin >> radius;
          cout << "\nPlease enter the cylinder's height: \n";
          cin >> height;
          result = 2*3.141596*radius*height+2*3.141596*radius*radius;
          cout << "cylinder's area is " << result;
          aaa << "cylinder's area is " << result;
          break;
        }
        case 2:
        {
         long double radius;
          cout << "Please enter the Sphere radius: \n";
          cin >> radius;
          result = 4* 3.141596 * radius * radius ;
          cout << "Sphere's area is " << result;
          aaa << "Sphere's area is " << result;
          break;

        }
        case 3 :
        {
          long double radius;
          long double height;
                     cout << "Please enter the cone radius: \n";
                     cin >> radius;
                     cout << "Please enter the cone height: \n";
                     cin >> height;
           result =  radius *3.141596 * (radius + sqrt(height*height + radius*radius));
           cout << "cone's area is " << result;
           aaa << "cone's area is " << result;
           break;

        }
         default: 
        { 
            cout << "Try Again please"; 
            break; 
        } 
    }
    
    
}

        void factorial () { //factorial function ...
ofstream aaf;
aaf.open ("results.txt",ios::app);
long double nfactorial ;
cout << "please enter the number "  ;
cin >> nfactorial ; 
long double ffactorial =1 ; 
for (long i = 0 ; i < nfactorial ; i++) { 
ffactorial = ffactorial * (nfactorial - i );
}
cout << "the factorial of the number you entered = " << ffactorial << endl ; 
 aaf << "the factorial of the number you entered = " << ffactorial;
}
		

void average () { // the average function ... 
double sum = 0 ;                                                //calculate the summetion 
double n , x ;                                                 //n for the number of numbers and x for each number 
cout << "please enter the number of numbers that you want to finde it's average " << endl; 
cin >> n; 
cout << "please enter the numbers "<< endl; 
ofstream aag;
aag.open ("results.txt",ios::app);
for ( int i =0 ; i < n ; i++ ) { 
cin >> x; 
sum +=x; 
}

cout << " the average = " << sum/n << endl ; 

aag << " the average = " << sum <<endl;

}


 void matrix(){
    
    int choice;
    long double result;

    cout
         << "Enter 1 for 2x2 matrix\n"
         << "Enter Your Choice";
    cin >> choice;
    switch (choice){
        case 1:
        {
            float m[2][2];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
        {
            cout <<"Enter element \n";
            cin >> m[i][j];
        }
    }


            float det = m[0][0]*m[1][1] - m[0][1]*m[1][0];
            cout <<"the determinate = " << det;
        
 ofstream aad;
        aad.open("results.txt",ios::app);
        aad << "the determinate = " << det << endl;

            
            break;
}
          
        }
    
    
}


int main(int argc, char** argv) {
    int input;
    double value;
    
    do{
     input = Menu();
     if (input == 1){
      value = simplemath();
     }
     else if(input == 2){
       quadratic();
     }
     else if(input == 3){
         Volume();
     }
     else if(input == 4){
         Area();
     }
     else if (input == 5){ 
         average ();
	 }
	 else if (input == 6){ 
	     factorial ();
	 }
	 else if (input == 7){
	 	matrix ();
	 }
    }
    while(input!=8);
    cout << "all the result has been saved in the file (results) \n";
return 0;}





