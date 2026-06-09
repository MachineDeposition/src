GLshort ailense_vertices[] = {-1,6531,-10545,-7044,8036,-2912,-1,10666,-2912,-1,8102,5913,7042,8036,-2912};
const GLubyte ailense_indices[] = {1,0,2,1,2,3,4,2,0,4,3,2};
void register_ailense()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, ailense_vertices, sizeof(ailense_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, ailense_indices, sizeof(ailense_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 12;
    esModelArray_index++;
}
