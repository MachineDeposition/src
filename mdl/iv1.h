GLshort iv1_vertices[] = {6904,-8231,-8289,8221,-8231,-8289,7562,-9875,-9090,6904,-9196,-7392,8221,-9196,-7392,-6904,-8231,-8289,-8221,-8231,-8289,-7562,-9875,-9090,-6904,-9196,-7392,-8221,-9196,-7392,-1573,-13274,-10524,1591,-13274,-10524,-1197,-13813,-10359,-1573,-14602,-7652,-4532,-1319,-8732,-4532,-5129,-489,4550,-1319,-8732,4550,-5129,-489,1591,-14602,-7652,1215,-14825,-8169,1215,-13813,-10359,-1197,-14825,-8169};
const GLubyte iv1_indices[] = {1,0,2,0,3,2,3,4,2,4,1,2,6,7,5,5,7,8,8,7,9,9,7,6,10,20,11,14,11,16,10,21,12,15,10,14,11,17,16,18,15,17,18,21,13,11,19,18,20,21,19,10,12,20,14,10,11,10,13,21,15,13,10,11,18,17,18,13,15,18,19,21,11,20,19,20,12,21};
void register_iv1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, iv1_vertices, sizeof(iv1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, iv1_indices, sizeof(iv1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
