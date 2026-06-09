GLshort floort0_vertices[] = {-5702,3808,832,-5702,-3808,832,0,-6932,832,5702,-3808,832,5702,3808,832,0,6932,832,-7345,4807,661,-7345,-4807,661,0,-8832,661,7345,-4807,661,7345,4807,661,0,8832,661,-8173,5289,900,-8173,-5289,900,0,-9767,900,8173,-5289,900,8173,5289,900,0,9767,900};
const GLubyte floort0_indices[] = {0,2,4,0,7,1,3,8,9,3,10,4,0,11,6,1,8,2,4,11,5,6,13,7,9,14,15,9,16,10,6,17,12,7,14,8,10,17,11,4,5,0,0,1,2,2,3,4,0,6,7,3,2,8,3,9,10,0,5,11,1,7,8,4,10,11,6,12,13,9,8,14,9,15,16,6,11,17,7,13,14,10,16,17};
void register_floort0()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floort0_vertices, sizeof(floort0_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floort0_indices, sizeof(floort0_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 84;
    esModelArray_index++;
}
