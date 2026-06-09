GLshort floort3_vertices[] = {1121,6506,832,1121,-6506,832,-2424,-4683,832,-2424,4683,832,2126,8256,810,2126,-8256,810,-3430,-5289,810,-3430,5289,810,1711,7402,661,1711,-7402,661,-3014,-4895,661,-3014,4895,661};
const GLubyte floort3_indices[] = {3,1,2,8,5,9,10,7,11,9,6,10,8,7,4,0,9,1,2,11,3,1,10,2,0,11,8,3,0,1,8,4,5,10,6,7,9,5,6,8,11,7,0,8,9,2,10,11,1,9,10,0,3,11};
void register_floort3()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floort3_vertices, sizeof(floort3_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floort3_indices, sizeof(floort3_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 54;
    esModelArray_index++;
}
