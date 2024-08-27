/* Input a string from the user. Count occurrences (case insensitive) of
each alphabet in the string.
  */

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>



 int main(){

char string[50];


printf("Enter the string :");
scanf("%[^\n]",&string);

int lidx=strlen(string);
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=0;

for(int i1=0;i1<lidx;i1++){

if(string[i1]=='a' || string[i1]=='A' ){
a++;
}

else if(string[i1]=='b' || string[i1]=='B'){
    b++;
}

else if(string[i1]=='c' || string[i1]=='C'){
    c++;
}

else if(string[i1]=='d' || string[i1]=='D'){
    d++;
}

else if(string[i1]=='e' || string[i1]=='E'){
    e++;
}

else if(string[i1]=='f' || string[i1]=='F'){
    f++;
}

else if(string[i1]=='g' || string[i1]=='G'){
    g++;
}

else if(string[i1]=='h' || string[i1]=='H'){
    h++;
}

else if(string[i1]=='I' || string[i1]=='i'){
    i++;
}

else if(string[i1]=='j' || string[i1]=='J'){
    j++;
}

else if(string[i1]=='k' || string[i1]=='K'){
    k++;
}

else if(string[i1]=='l' || string[i1]=='L'){
    l++;
}

else if(string[i1]=='m' || string[i1]=='M'){
    m++;
}

else if(string[i1]=='n' || string[i1]=='N'){
    n++;
}

else if(string[i1]=='o' || string[i1]=='O'){
    o++;
}

else if(string[i1]=='p' || string[i1]=='P'){
    p++;
}

else if(string[i1]=='q' || string[i1]=='Q'){
   q++;
}
else if(string[i1]=='r' || string[i1]=='R'){
  r++;  
}

else if(string[i1]=='s' || string[i1]=='S'){
   s++; 
}

else if(string[i1]=='t' || string[i1]=='T'){
    t++;
}

else if(string[i1]=='u' || string[i1]=='U'){
    u++;
}

else if(string[i1]=='v' || string[i1]=='V'){
    v++;
}

else if(string[i1]=='w' || string[i1]=='W'){
    w++;
}

else if(string[i1]=='x' || string[i1]=='X'){
    x++;
}

else if(string[i1]=='y' || string[i1]=='Y'){
    y++;
}

else if (string[i1]=='z' || string[i1]=='Z'){
z++;
}

else{
    continue;
}

}

printf("\noutput:");
printf("\nA:%d",a);
printf("\nB:%d",b);
printf("\nC:%d",c);
printf("\nD:%d",d);
printf("\nE:%d",e);
printf("\nF:%d",f);
printf("\nG:%d",g);
printf("\nH:%d",h);
printf("\nI:%d",i);
printf("\nJ:%d",j);
printf("\nK:%d",k);
printf("\nL:%d",l);
printf("\nM:%d",m);
printf("\nN:%d",n);
printf("\nO:%d",o);
printf("\nP:%d",p);
printf("\nQ:%d",q);
printf("\nR:%d",r);
printf("\nS:%d",s);
printf("\nT:%d",t);
printf("\nU:%d",u);
printf("\nV:%d",v);
printf("\nW:%d",w);
printf("\nX:%d",x);
printf("\nY:%d",y);
printf("\nZ:%d",z);
     return 0;
 }