GLshort corner1_vertices[] = {9860,-6675,8904,9860,-6675,-8904,-6600,-6675,8904,-6600,-6675,-8904,14739,-6675,-0,-8208,-8208,10546,10923,-8378,10546,16702,-8378,-0,10923,-8378,-10546,-8208,-8208,-10546,-6072,-6146,8173,9387,-6146,8173,13865,-6146,-0,9387,-6146,-8173,-6072,-6146,-8173,-6600,9934,8904,-6600,9934,-8904,-6600,14814,0,-8304,10997,10546,-8304,10997,-10546,-8304,16776,0,-6072,9461,8173,-6072,9461,-8173,-6072,13940,0};
const GLubyte corner1_indices[] = {8,5,6,4,6,0,0,12,4,3,8,1,2,6,5,4,8,7,11,14,13,1,14,3,0,10,11,1,12,13,19,18,5,3,19,9,2,18,15,16,20,19,15,20,17,10,23,22,16,14,22,15,10,2,17,22,23,17,21,15,6,7,8,8,9,5,4,7,6,0,11,12,3,9,8,2,0,6,4,1,8,13,12,11,11,10,14,1,13,14,0,2,10,1,4,12,5,9,19,19,20,18,3,16,19,2,5,18,16,17,20,15,18,20,22,14,10,10,21,23,16,3,14,15,21,10,17,16,22,17,23,21};
void register_corner1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, corner1_vertices, sizeof(corner1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, corner1_indices, sizeof(corner1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 132;
    esModelArray_index++;
}
