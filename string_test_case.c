#include <gtest/gtest.h>
#include "string.h"

TEST(StringLength,MyTest)
{
	char str1[]= "hey";
	char str2[]= "6hey";
	char str3[]= "6%%%";
	char str4[]= "";
	
	EXPECT_EQ(3, my_strlen(str1));
	EXPECT_EQ(4, my_strlen(str2));
	EXPECT_EQ(4, my_strlen(str3));
	EXPECT_EQ(0, my_strlen(str4));
}

TEST(StringUpper,MyTest)
{
	char str1[]= "hey";
	int ret1;
	char str2[]= "6hey";
	int ret2;
	char str3[]= "6%%%";
	int ret3;
	char str4[]= "";
	int ret4;

	ret1=str2upper(str1);
	ret2=str2upper(str2);
	ret3=str2upper(str3);
	ret4=str2upper(str4);

	EXPECT_EQ(3, ret1);
	EXPECT_STREQ("HEY",str1);
	
	EXPECT_EQ(3, ret2);
	EXPECT_STREQ("6HEY", str2);
	
	EXPECT_EQ(0, ret3);
	EXPECT_STREQ("6%%%",str3);
	
	EXPECT_EQ(0, ret4);
	EXPECT_STREQ("", str4);

}

TEST(StringLower,MyTest)
{
	char str1[]= "HEY";
	int ret1;
	char str2[]= "6HEY";
	int ret2;
	char str3[]= "6%%%";
	int ret3;
	char str4[]= "";
	int ret4;
	
	ret1=str2lower_(str1);
	ret2=str2lower_(str2);
	ret3=str2lower_(str3);
	ret4=str2lower_(str4);
	
	EXPECT_EQ(ret1,3);
	EXPECT_STREQ("hey", str1);
	
	EXPECT_EQ(ret2,3);
	EXPECT_STREQ("6hey", str2);
	
	EXPECT_EQ(ret3,0);
	EXPECT_STREQ("6%%%", str3);
	
	EXPECT_EQ(ret4,0);
	EXPECT_STREQ("", str4);
	
}

TEST(StringStrip,MyTest)
{
	char str1[]= "hey";
	int ret1;
	char str2[]= "6hey";
	int ret2;
	char str3[]= "6%%%";
	int ret3;
	char str4[]= "";
	int ret4;

	ret1=str_strip_numbers(str1);
	ret2=str_strip_numbers(str2);
	ret3=str_strip_numbers(str3);
	ret4=str_strip_numbers(str4);

	EXPECT_EQ(ret1,3);
	
	EXPECT_EQ(ret2,3);

	EXPECT_EQ(ret3,3);
	
	EXPECT_EQ(ret4,0);

}

TEST(StringCopy,MyTest)
{
	char str1[]= "hey";
	char str2[]= "6hey";
	char str3[]= "6%%%";
	char str4[]= "";
	char str12[100], str22[100], str32[100], str42[100];
	
	mystrcpy(str1, str12);
	mystrcpy(str2, str22);
	mystrcpy(str3, str32);
	mystrcpy(str4, str42);
	
	EXPECT_STREQ(str1, str12);
	EXPECT_STREQ(str2, str22);
	EXPECT_STREQ(str3, str32);
	EXPECT_STREQ(str4, str42);
}

TEST(StringCompare,MyTest)
{
	char str1[]= "abc";
	char str2[]= "hey";
	char str3[]= "hey";
	char str4[]= "";
	char str12[]= "abc";
	char str22[]= "h3y";
	char str32[]= "hey6";
	char str42[]= "";
	EXPECT_EQ(0, mystrcmp(str1, str12));
	EXPECT_EQ(1, mystrcmp(str2, str22));
	EXPECT_EQ(-3, mystrcmp(str3, str32));
	EXPECT_EQ(0, mystrcmp(str4, str42));
}

TEST(StringDuplicate,MyTest)
{
	char str1[]= "hey";
	char str2[]= "6hey";
	char str3[]= "6%%%";
	char str4[]= "";

	EXPECT_STREQ(str1, strdupl(str1));
	EXPECT_STREQ(str2, strdupl(str2));
	EXPECT_STREQ(str3, strdupl(str3));
	EXPECT_STREQ(str4, strdupl(str4));
	
}

