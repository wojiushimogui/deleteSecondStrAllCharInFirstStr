/*
 ��Ŀ�����������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
 ���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.����
 
 ˼·�� ��һ�ַ���������Ӧ��������forѭ������ɵģ�ʱ�临�Ӷ�ΪO(m*n)
 �����ˣ����ǻ�һ�ַ���������ʱ�临�Ӷȣ��ռ任ȡʱ�� 
*/
//����Ҫ��һ���ٶ����ַ���ȫ����Сд��ĸ���� 
#include<stdio.h>
#include<string.h>

void deleteSecondStrAllCharInFirstStr_1(char *str1,char *str2){
	//�ȼ��str1��str2�Ƿ���Ч
	if(str1==NULL||str2==NULL||str1==" "||str2==" "){
		return ;
		
	} 
	bool temp[26];
	memset(temp,0,sizeof(temp));//��ʼ��  Ϊ 0 
	int len1=strlen(str1);
	int len2=strlen(str2);
	
	for(int i=0;i<len2;i++){
		temp[str2[i]-'a']=1;
	}
	int p=0;
	for(int i=0;i<len1;i++){
		if(!temp[str1[i]-'a']){//�ж�str[i]�Ƿ���str2�г��ֵ��ַ� 
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
