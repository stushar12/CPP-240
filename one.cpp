int maxArea(const vector<int>& height) {
  int leader = 0;
  for (int a = 0, z = height.size() - 1; a < z;) 
  {
    int curr_height = min(height[a], height[z]);
    int curr_area = (z - a) * curr_height;
    if (curr_area > leader) 
        leader = curr_area;

    // move both bars until we find something taller than the current height
    for (; a < z && height[a] <= curr_height; a++) {}
    for (; a < z && height[z] <= curr_height; z--) {}
  }

  return leader;
}