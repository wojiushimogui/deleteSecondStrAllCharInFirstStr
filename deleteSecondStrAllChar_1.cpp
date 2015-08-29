/*
 题目：输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
 例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”。
 
 思路： 第一种方法中我们应用了两层for循环来完成的，时间复杂度为O(m*n)
 这里了，我们换一种方法来降低时间复杂度：空间换取时间 
*/
//这里要做一个假定：字符串全部有小写字母构成 
#include<stdio.h>
#include<string.h>

void deleteSecondStrAllCharInFirstStr_1(char *str1,char *str2){
	//先检查str1、str2是否有效
	if(str1==NULL||str2==NULL||str1==" "||str2==" "){
		return ;
		
	} 
	bool temp[26];
	memset(temp,0,sizeof(temp));//初始化  为 0 
	int len1=strlen(str1);
	int len2=strlen(str2);
	
	for(int i=0;i<len2;i++){
		temp[str2[i]-'a']=1;
	}
	int p=0;
	for(int i=0;i<len1;i++){
		if(!temp[str1[i]-'a']){//判断str[i]是否是str2中出现的字符 
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
	deleteSecondStrAllCharInFirstStr_1(str1,str2);
	puts(str1);
	puts(str2); 
	return 0;
}
