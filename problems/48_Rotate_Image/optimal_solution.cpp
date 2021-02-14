//https://leetcode.com/problems/rotate-image/discuss/18872/A-common-method-to-rotate-the-image
//想法:It's a good method, but remember 
/*this is a high school geometry level problem. 
All rotations are composite reflections 
(in fact, all transformations are composite reflections);
 in this case, a reflection across the vertical line of symmetry
 , then a reflection across the diagonal. If you recall this fact, 
 this method will allow you
  to swap in-place rather than having to endure the tedium of multiplying by a rotation matrix.
  */