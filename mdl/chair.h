GLshort chair_vertices[] = {-8904,-5762,832,8904,-5762,832,-8904,5762,832,8904,5762,832,0,-10641,832,0,10641,832,-10546,6825,-871,-10546,-6825,-871,-0,-12604,-871,10546,-6825,-871,10546,6825,-871,-0,12604,-871,-8173,5289,900,-8173,-5289,900,0,-9767,900,8173,-5289,900,8173,5289,900,0,9767,900,-8173,5289,-861,-8173,-5289,-861,-0,-9767,-861,8173,-5289,-861,8173,5289,-861,-0,9767,-861};
const GLubyte chair_indices[] = {4,7,0,0,14,4,1,10,9,0,6,2,5,10,3,5,6,11,4,9,8,13,20,14,3,15,16,2,13,0,3,17,5,2,17,12,1,14,15,15,22,16,12,19,13,16,23,17,17,18,12,14,21,15,4,8,7,0,13,14,1,3,10,0,7,6,5,11,10,5,2,6,4,1,9,13,19,20,3,1,15,2,12,13,3,16,17,2,5,17,1,4,14,15,21,22,12,18,19,16,22,23,17,23,18,14,20,21};
void register_chair()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, chair_vertices, sizeof(chair_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, chair_indices, sizeof(chair_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 108;
    esModelArray_index++;
}
