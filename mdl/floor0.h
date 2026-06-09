GLshort floor0_vertices[] = {-8904,-5762,832,8904,-5762,832,-8904,5762,832,8904,5762,832,0,-10641,832,0,10641,832,-10546,6825,-871,-10546,-6825,-871,-0,-12604,-871,10546,-6825,-871,10546,6825,-871,-0,12604,-871,-8173,5289,-861,-8173,-5289,-861,-0,-9767,-861,8173,-5289,-861,8173,5289,-861,-0,9767,-861,-8173,5289,900,-8173,-5289,900,0,-9767,900,8173,-5289,900,8173,5289,900,0,9767,900};
const GLubyte floor0_indices[] = {4,7,0,0,20,4,1,10,9,0,6,2,5,10,3,5,6,11,4,9,8,19,14,20,3,21,22,2,19,0,3,23,5,2,23,18,1,20,21,21,16,22,18,13,19,22,17,23,23,12,18,20,15,21,17,15,13,4,8,7,0,19,20,1,3,10,0,7,6,5,11,10,5,2,6,4,1,9,19,13,14,3,1,21,2,18,19,3,22,23,2,5,23,1,4,20,21,15,16,18,12,13,22,16,17,23,17,12,20,14,15,13,12,17,17,16,15,15,14,13};
void register_floor0()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor0_vertices, sizeof(floor0_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor0_indices, sizeof(floor0_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 120;
    esModelArray_index++;
}
