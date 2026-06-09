GLshort floort2_vertices[] = {-2146,-935,832,-2146,-2036,832,1427,-2036,832,1427,800,832,-3145,-163,832,-3145,-3020,832,2427,-3020,832,2427,2530,832,-2823,-517,661,-2823,-2705,661,2105,-2705,661,2105,1873,661};
const GLubyte floort2_indices[] = {0,2,3,8,5,9,11,6,7,9,6,10,11,4,8,1,8,9,3,10,11,1,10,2,3,8,0,0,1,2,8,4,5,11,10,6,9,5,6,11,7,4,1,0,8,3,2,10,1,9,10,3,11,8};
void register_floort2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floort2_vertices, sizeof(floort2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floort2_indices, sizeof(floort2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 54;
    esModelArray_index++;
}
