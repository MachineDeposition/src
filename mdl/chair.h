GLshort chair_vertices[] = {-8904,-5762,832,8904,-5762,832,-8904,5762,832,8904,5762,832,0,-10641,832,0,10641,832,-10546,6825,-871,-10546,-6825,-871,-0,-12604,-871,10546,-6825,-871,10546,6825,-871,-0,12604,-871,-8173,5289,900,-8173,-5289,900,0,-9767,900,8173,-5289,900,8173,5289,900,0,9767,900,-8173,5289,-861,-8173,-5289,-861,-0,-9767,-861,8173,-5289,-861,8173,5289,-861,-0,9767,-861};
const GLubyte chair_indices[] = {7,4,0,14,0,4,1,10,3,6,0,2,10,5,3,5,6,2,4,9,1,20,13,14,3,15,1,13,2,0,17,3,5,2,17,5,1,14,4,22,15,16,19,12,13,23,16,17,18,17,12,21,14,15,7,8,4,14,13,0,1,9,10,6,7,0,10,11,5,5,11,6,4,8,9,20,19,13,3,16,15,13,12,2,17,16,3,2,12,17,1,15,14,22,21,15,19,18,12,23,22,16,18,23,17,21,20,14};
void register_chair()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, chair_vertices, sizeof(chair_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, chair_indices, sizeof(chair_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 108;
    esModelArray_index++;
}
