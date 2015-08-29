/*
 题目：输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
 例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”。
 
 思路： 
*/
#include<stdio.h>  
#include<string.h>  

void deleteSecondStrAllCharInFirstStr(char *str1,char *str2){
	//先检查str1和str2 
	if(str1==NULL||str2==NULL||str1==" "||str2==" "){
		return;
	}
	int len1=strlen(str1);
	int len2=strlen(str2);
	//利用两层for循环来讲str1中在str2中出现的字符全部用 '\0'来替换掉 
	for(int i=0;i<len2;i++){
		char ch=str2[i];
		for(int j=0;j<len1;j++){
			if(str1[j]==ch){
				str1[j]='\0';
			}
		}
	}
	//然后将str1中后面的字符替换到前面的 '\0' 
	int p=0;
	for(int i=0;i<len1;i++){
		if(str1[i]!='\0'){
			str1[p++]=str1[i];
		}
	}
	str1[p]='\0'; 
	
	
	
}
int main(void){
	char str1[1000];
	char str2[1000];
	gets(str1);
	gets(str2);
	deleteSecondStrAllCharInFirstStr(str1,str2);
	puts(str1);
	return 0;
} 
