int maxArea(const vector<int>& height) 
{
  int leader = 0;
  int low=0,high=height.size()-1;
  while(low<high)
  {
    int curr_height = min(height[low], height[high]);    //water can fill upto min height
    int curr_area = (high-low) * curr_height;             //total water = difference between two pillars * min height
    if (curr_area > leader) 
        leader = curr_area;

    if(height[low]<height[high])  //change the pillar whose height is less out of the two because lower height pillar cannot yield more result than the previous smaller one
    low++;
    else
    high--;
  }

  return leader;
}
}
