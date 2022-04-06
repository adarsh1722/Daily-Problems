# Array to BST
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a sorted array. Convert it into a Height balanced&nbsp;Binary Search Tree (BST). Find the preorder traversal of height balanced BST. If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.<br>
Height balanced BST means a binary tree in which the depth of the left subtree and the right subtree&nbsp;of every node never differ by more than 1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> nums = {1, 2, 3, 4}
<strong>Output:</strong> {2, 1, 3, 4}
<strong>Explanation:</strong> 
The preorder traversal of the following 
BST formed is {2, 1, 3, 4}:
</span><span style="font-size:18px">&nbsp;          2
</span><span style="font-size:18px">&nbsp;        /   \
</span>           <span style="font-size:18px">1     3
</span><span style="font-size:18px">&nbsp;              \
&nbsp;               4</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>nums = {1,2,3,4,5,6,7}
<strong>Ouput: </strong>{4,2,1,3,6,5,7}
<strong>Explanation: 
</strong>The preorder traversal of the following
BST formed is {4,2,1,3,6,5,7} :
        4
       / \
      2   6
     / \  / \
    1   3 5  7</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>sortedArrayToBST()&nbsp;</strong>which takes the sorted array <strong>nums</strong> as input paramater and returns the preorder traversal of height balanced BST. If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |nums| ≤&nbsp;10<sup>4</sup><br>
-10<sup>4</sup>&nbsp;≤&nbsp;nums[i] ≤&nbsp;10<sup>4</sup></span><br>
&nbsp;</p>
 <p></p>
            </div>