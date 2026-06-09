GLshort iv4_vertices[] = {-1250,-6317,11913,-5821,-6424,12272,-1614,-6060,11059,-2439,-5811,10228,-3205,-5812,10233,-3745,-6060,11056,1458,-6317,11913,6029,-6424,12272,2174,-5813,10234,2734,-5812,10233,3953,-6060,11056};
const GLubyte iv4_indices[] = {5,3,0,10,8,6,0,1,5,5,4,3,3,2,0,6,7,10,10,9,8};
void register_iv4()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, iv4_vertices, sizeof(iv4_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, iv4_indices, sizeof(iv4_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 21;
    esModelArray_index++;
}
