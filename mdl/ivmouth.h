GLshort ivmouth_vertices[] = {2000,-0,1027,-2571,0,350,795,-0,-1177,-224,-0,-201};
const GLubyte ivmouth_indices[] = {3,0,1,3,2,0};
void register_ivmouth()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, ivmouth_vertices, sizeof(ivmouth_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, ivmouth_indices, sizeof(ivmouth_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 6;
    esModelArray_index++;
}
