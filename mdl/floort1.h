GLshort floort1_vertices[] = {-7121,478,832,-7121,1685,832,7121,1685,832,7121,478,832,0,-3424,832,-8173,-133,832,-8173,2724,832,8173,2724,832,8173,-133,832,0,-4612,832,-7739,119,661,-7739,2295,661,7739,2295,661,7739,119,661,0,-4122,661};
const GLubyte floort1_indices[] = {0,2,3,11,5,6,12,8,13,10,9,5,13,9,14,12,6,7,1,10,11,2,13,3,0,14,10,3,14,4,2,11,12,3,4,0,0,1,2,11,10,5,12,7,8,10,14,9,13,8,9,12,11,6,1,0,10,2,12,13,0,4,14,3,13,14,2,1,11};
void register_floort1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floort1_vertices, sizeof(floort1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floort1_indices, sizeof(floort1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 69;
    esModelArray_index++;
}
