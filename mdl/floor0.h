GLshort floor0_vertices[] = {-8904,-5762,832,8904,-5762,832,-8904,5762,832,8904,5762,832,0,-10641,832,0,10641,832,-10546,6825,-871,-10546,-6825,-871,-0,-12604,-871,10546,-6825,-871,10546,6825,-871,-0,12604,-871,-8173,5289,-861,-8173,-5289,-861,-0,-9767,-861,8173,-5289,-861,8173,5289,-861,-0,9767,-861,-8173,5289,900,-8173,-5289,900,0,-9767,900,8173,-5289,900,8173,5289,900,0,9767,900};
const GLubyte floor0_indices[] = {7,4,0,20,0,4,1,10,3,6,0,2,10,5,3,5,6,2,4,9,1,14,19,20,3,21,1,19,2,0,23,3,5,2,23,5,1,20,4,16,21,22,13,18,19,17,22,23,12,23,18,15,20,21,13,15,17,7,8,4,20,19,0,1,9,10,6,7,0,10,11,5,5,11,6,4,8,9,14,13,19,3,22,21,19,18,2,23,22,3,2,18,23,1,21,20,16,15,21,13,12,18,17,16,22,12,17,23,15,14,20,17,12,13,13,14,15,15,16,17};
void register_floor0()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor0_vertices, sizeof(floor0_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor0_indices, sizeof(floor0_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 120;
    esModelArray_index++;
}
