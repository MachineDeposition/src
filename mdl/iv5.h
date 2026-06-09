GLshort iv5_vertices[] = {2663,-5469,9089,2174,-5813,10234,3953,-6060,11056,2734,-5812,10233,-2455,-5469,9089,-1614,-6060,11059,-3205,-5812,10233,-2439,-5811,10228};
const GLubyte iv5_indices[] = {3,0,1,7,4,5,3,2,0,7,6,4};
void register_iv5()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, iv5_vertices, sizeof(iv5_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, iv5_indices, sizeof(iv5_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 12;
    esModelArray_index++;
}
