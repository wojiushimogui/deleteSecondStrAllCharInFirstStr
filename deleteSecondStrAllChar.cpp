/*
 ��Ŀ�����������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
 ���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.����
 
 ˼·�� 
*/
#include<stdio.h>  
#include<string.h>  

void deleteSecondStrAllCharInFirstStr(char *str1,char *str2){
	//�ȼ��str1��str2 
	if(str1==NULL||str2==NULL||str1==" "||str2==" "){
		return;
	}
	int len1=strlen(str1);
	int len2=strlen(str2);
	//��������forѭ������str1����str2�г��ֵ��ַ�ȫ���� '\0'���滻�� 
	for(int i=0;i<len2;i++){
		char ch=str2[i];
		for(int j=0;j<len1;j++){
			if(str1[j]==ch){
				str1[j]='\0';
			}
		}
	}
	//Ȼ��str1�к�����ַ��滻��ǰ��� '\0' 
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
