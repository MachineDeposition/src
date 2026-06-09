GLshort aieye_vertices[] = {-1,4841,-7728,-4286,4841,-3084,-1,9960,-3084,-1,4841,2285,4284,4841,-3084};
const GLubyte aieye_indices[] = {1,0,2,1,2,3,4,2,0,4,3,2};
void register_aieye()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, aieye_vertices, sizeof(aieye_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, aieye_indices, sizeof(aieye_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 12;
    esModelArray_index++;
}
