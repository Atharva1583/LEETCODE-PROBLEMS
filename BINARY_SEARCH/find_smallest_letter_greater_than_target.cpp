class Solution {
public:
char nextGreatestLetter(vector<char>& letters, char target) {
int left=0;
int right=letters.size();
while(left<right)
{
int m=left+(right-left)/2;
if(letters[m]>target)
right--;
else
left++;
}
if(left==letters.size())
{
return letters[0];
}
return letters[left];
}
};
