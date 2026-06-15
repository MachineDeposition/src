GLshort corner1_vertices[] = {9860,-6675,8904,9860,-6675,-8904,-6600,-6675,8904,-6600,-6675,-8904,14739,-6675,-0,-8208,-8208,10546,10923,-8378,10546,16702,-8378,-0,10923,-8378,-10546,-8208,-8208,-10546,-6072,-6146,8173,9387,-6146,8173,13865,-6146,-0,9387,-6146,-8173,-6072,-6146,-8173,-6600,9934,8904,-6600,9934,-8904,-6600,14814,0,-8304,10997,10546,-8304,10997,-10546,-8304,16776,0,-6072,9461,8173,-6072,9461,-8173,-6072,13940,0};
const GLubyte corner1_indices[] = {6,9,8,6,4,0,12,0,4,8,3,1,2,6,0,4,8,1,13,10,11,14,1,3,0,10,2,1,12,4,5,20,19,3,19,16,18,2,15,16,20,17,20,15,17,22,21,10,16,14,3,10,15,2,17,22,16,21,17,15,8,7,6,6,5,9,6,7,4,12,11,0,8,9,3,2,5,6,4,7,8,11,12,13,13,14,10,14,13,1,0,11,10,1,13,12,19,9,5,5,18,20,3,9,19,18,5,2,16,19,20,20,18,15,10,14,22,22,23,21,16,22,14,10,21,15,17,23,22,21,23,17};
void register_corner1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, corner1_vertices, sizeof(corner1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, corner1_indices, sizeof(corner1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 132;
    esModelArray_index++;
}
