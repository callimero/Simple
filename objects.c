/** \file
   Objects
*/
#include "objects.h"

const  objects_char_t gobjects[] = {
  {
    7, /* 0 Ship */
    -4, -5, 0, -3, 4, -5, 0, 5, -4, -5, 0, 2, 4, -5,
  },
  {
    2, /* 1 "punkt" */
    1, 0, 0, 0,
  },
  {
    2, /* 2 Linie */
    -10, 0, 10, 0,
  },
  {
    9,          //Jet 3
    -2, 3,
    0, 8,
    2, 3,
    -127, -127,
    0, -3,
    -10, -7,
    0, 13,
    10, -7,
    0, -3,
  },
  
  {
    5,          //Engine 4
    -2, -3,
    0, -3,
    2, -4,
    0, -10,
    -2, -3,
  },
  
  { 
    5,          //Kreuz 5
    -4, 0,
    4, 0,
    -127, -127,
    0, 4,
    0, -4,
  },


  { 5,          //Bullet 6
    -2, -3,
    2, -3,
    1, 3,
    -1, 3,
    -2, -3,
  },


{26,          //Suedamerika
-80,-28,
-78,-18,
-78,-16,
-77,-16,
-73,-13,
-72,-14,
-67,-15,
-57,-21,
-51,-26,
-45,-28,
-46,-33,
-49,-42,
-53,-44,
-55,-51,
-58,-55,
-61,-57,
-63,-59,
-63,-63,
-62,-67,
-64,-68,
-68,-63,
-68,-60,
-70,-56,
-71,-40,
-76,-35,
-80,-28,
},

{88,          //Nordamerika
-61,27,
-59,26,
-59,24,
-55,21,
-53,21,
-55,19,
-59,14,
-62,14,
-65,13,
-67,12,
-71,9,
-74,5,
-78,2,
-78,-2,
-80,1,
-83,2,
-87,1,
-90,0,
-92,-5,
-89,-8,
-84,-5,
-84,-10,
-82,-10,
-82,-15,
-78,-16,
-81,-17,
-90,-10,
-92,-10,
-97,-7,
-98,-4,
-101,-1,
-103,0,
-104,2,
-105,6,
-106,10,
-102,16,
-100,17,
-101,20,
-101,22,
-102,25,
-109,26,
-115,25,
-117,25,
-116,27,
-112,29,
-110,32,
-102,34,
-94,33,
-87,33,
-81,32,
-78,31,
-76,32,
-70,31,
-66,32,
-62,33,
-63,31,
-68,30,
-71,29,
-75,24,
-70,22,
-70,19,
-64,26,
-61,27,
-127,-127,
-55,29,
-57,28,
-56,31,
-59,33,
-64,34,
-62,35,
-60,35,
-55,34,
-52,30,
-55,30,
-55,29,
-127,-127,
-46,29,
-44,33,
-46,37,
-50,38,
-45,40,
-29,41,
-22,40,
-25,37,
-29,35,
-35,31,
-44,26,
-46,29,
},

{204,          //Eurasien
65,-14,
63,-16,
59,-12,
59,-15,
62,-20,
62,-22,
58,-15,
57,-10,
55,-10,
51,-4,
49,-5,
43,-11,
43,-15,
41,-16,
37,-5,
35,-4,
31,-2,
26,-2,
22,0,
18,1,
19,-1,
22,-3,
24,-2,
27,-5,
23,-9,
16,-12,
14,-9,
12,-5,
8,0,
7,0,
12,-9,
16,-15,
21,-13,
19,-19,
13,-25,
13,-32,
13,-36,
8,-40,
6,-47,
1,-52,
-3,-52,
-4,-49,
-8,-38,
-7,-33,
-8,-29,
-11,-21,
-12,-19,
-14,-18,
-18,-19,
-24,-19,
-27,-16,
-30,-12,
-29,-4,
-24,2,
-23,4,
-21,5,
-9,7,
-9,4,
-5,2,
-3,1,
-2,3,
5,2,
8,3,
8,6,
3,7,
1,9,
5,11,
12,11,
9,14,
9,15,
7,15,
5,15,
2,12,
2,10,
0,10,
0,7,
-1,8,
-4,12,
-8,14,
-4,10,
-5,8,
-10,13,
-16,10,
-18,7,
-21,6,
-23,7,
-23,11,
-22,12,
-18,12,
-18,15,
-19,16,
-16,17,
-10,22,
-11,23,
-10,24,
-10,22,
-9,21,
-3,21,
-1,24,
-1,25,
-2,26,
-2,28,
-2,30,
-5,27,
-4,26,
-7,22,
-9,25,
-11,24,
-13,26,
-6,32,
-1,34,
7,31,
2,31,
6,29,
10,31,
18,32,
22,32,
24,33,
25,34,
30,36,
35,37,
36,38,
60,34,
63,35,
66,34,
80,33,
91,31,
91,30,
92,28,
89,26,
85,26,
88,22,
88,19,
83,23,
84,27,
81,27,
79,26,
79,25,
76,25,
72,25,
71,22,
74,21,
77,18,
78,13,
75,12,
74,9,
74,9,
77,6,
75,5,
72,9,
69,10,
67,8,
71,7,
69,5,
72,1,
71,-2,
66,-6,
64,-5,
63,-7,
66,-12,
65,-14,
-127,-127,
-19,20,
-18,21,
-19,22,
-19,24,
-18,23,
-16,19,
-19,18,
-19,20,
-127,-127,
-20,22,
-22,21,
-23,19,
-21,20,
-20,22,
-127,-127,
72,-18,
74,-19,
74,-22,
71,-26,
67,-26,
67,-22,
72,-18,
-127,-127,
16,-37,
15,-43,
16,-45,
19,-40,
20,-34,
16,-37,
-127,-127,
56,-19,
59,-21,
64,-27,
62,-28,
56,-19,
-127,-127,
82,6,
83,10,
85,6,
82,4,
78,5,
82,6,
},

{34,          //Australien
87,-26,
89,-25,
94,-27,
98,-32,
94,-30,
92,-31,
89,-30,
89,-28,
86,-27,
84,-24,
87,-26,
-127,-127,
91,-55,
88,-56,
84,-55,
83,-53,
83,-52,
82,-53,
80,-50,
68,-53,
67,-52,
68,-43,
73,-40,
79,-35,
81,-36,
83,-34,
86,-34,
88,-37,
90,-38,
92,-33,
94,-39,
97,-45,
96,-49,
91,-55,
},



  { 1,          //Platzhalter 11
    0, 0,
  },
  { 1,          //Platzhalter 12
    0, 0,
  },



  { 19,          //Meteor1 13
    -5, 0,
    -6, -2,
    -5, -6,
    0, -5,
    7, -6,
    5, 0,
    9, 3,
    4, 8,
    -1, 9,
    -6, 6,
    -5, 0,
    -127, -127,
    0, 4,
    -1, 6,
    -2, 4,
    -127, -127,
    0, -3,
    4, -3,
    2, 0,
  },


  { 19,          //Meteor2 14
    -5, -1,
    -6, -3,
    -3, -6,
    0, -6,
    2, -5,
    6, -2,
    7, 1,
    4, 5,
    -1, 7,
    -5, 4,
    -5, -1,
    -127, -127,
    2, 2,
    0, 5,
    0, 2,
    -127, -127,
    -3, -4,
    -1, -4,
    -2, -1,
  },

  { 1,          //Platzhalter 15
    0, 0,
  },
  { 1,          //Platzhalter 16
    0, 0,
  },
  { 1,          //Platzhalter 17
    0, 0,
  },

{17,          //Enemy01 18
4,-4,
3,-1,
4,3,
3,4,
3,3,
0,2,
-3,3,
-3,4,
-4,3,
-3,-1,
-4,-4,
0,-3,
4,-4,
-127,-127,
1,-1,
0,1,
-1,-1,
},


{  23,          //Enemy02 19
4,5,
2,6,
4,2,
0,3,
-4,2,
-3,4,
-2,6,
-4,5,
-6,1,
-2,-5,
1,-5,
6,1,
4,5,
-127,-127,
0,1,
1,1,
1,0,
1,-1,
0,-1,
-1,-1,
-1,0,
-1,1,
0,1,
},

{57,          //Enemy03 20
-3,1,
-6,-1,
-127,-127,
-1,1,
-1,0,
-2,0,
-3,-2,
-4,-3,
-7,-3,
-7,0,
-4,1,
-3,2,
-1,1,
-127,-127,
3,1,
6,-1,
-127,-127,
2,3,
1,3,
3,7,
4,5,
2,3,
2,3,
-127,-127,
-2,3,
-1,3,
-3,7,
-4,5,
-2,3,
-2,3,
-127,-127,
1,1,
1,0,
2,0,
3,-2,
4,-3,
7,-3,
7,0,
4,1,
3,2,
1,1,
-127,-127,
1,3,
2,2,
1,0,
2,-1,
3,-3,
2,-5,
0,-6,
-2,-5,
-3,-3,
-2,-1,
-1,0,
-2,2,
-1,3,
0,4,
1,3,
},

{53,          //Enemy 04  21
15,9,
17,14,
22,14,
-127,-127,
-5,-16,
-3,-11,
1,-11,
-127,-127,
-25,10,
-22,15,
-17,15,
-127,-127,
7,-7,
5,-5,
12,2,
15,0,
7,-7,
-127,-127,
-5,-7,
-2,-5,
-10,2,
-12,0,
-5,-7,
-127,-127,
25,17,
30,12,
30,5,
25,0,
17,0,
12,5,
12,12,
17,17,
25,17,
-127,-127,
-2,-25,
-7,-20,
-7,-12,
-2,-7,
5,-7,
10,-12,
10,-20,
5,-25,
-2,-25,
-127,-127,
-15,17,
-10,12,
-10,5,
-15,0,
-22,0,
-27,5,
-27,12,
-22,17,
-15,17,
},



};
