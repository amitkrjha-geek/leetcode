<h2><a href="https://leetcode.com/problems/minimize-maximum-of-array/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2439. Minimize Maximum of Array</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> array <code>nums</code> comprising of <code>n</code> non-negative integers.</p>

<p>In one operation, you must:</p>

<ul>
	<li>Choose an integer <code>i</code> such that <code>1 &lt;= i &lt; n</code> and <code>nums[i] &gt; 0</code>.</li>
	<li>Decrease <code>nums[i]</code> by 1.</li>
	<li>Increase <code>nums[i - 1]</code> by 1.</li>
</ul>

<p>Return<em> the <strong>minimum</strong> possible value of the <strong>maximum</strong> integer of </em><code>nums</code><em> after performing <strong>any</strong> number of operations</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,7,1,6]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
One set of optimal operations is as follows:
1. Choose i = 1, and nums becomes [4,6,1,6].
2. Choose i = 3, and nums becomes [4,6,2,5].
3. Choose i = 1, and nums becomes [5,5,2,5].
The maximum integer of nums is 5. It can be shown that the maximum number cannot be less than 5.
Therefore, we return 5.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [10,1]
<strong>Output:</strong> 10
<strong>Explanation:</strong>
It is optimal to leave nums as is, and since 10 is the maximum value, we return 10.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>