GLshort floor3_vertices[] = {2923,-9653,810,-4161,-5762,810,2923,9653,810,-4161,5762,810,4489,12369,-894,4489,-12369,-894,-5803,-6825,-894,-5803,6825,-894,2126,8256,-749,2126,-8256,-749,-3430,-5289,-883,-3430,5289,-883,2126,8256,810,2126,-8256,810,-3430,-5289,810,-3430,5289,810};
const GLubyte floor3_indices[] = {1,7,3,4,0,2,7,2,3,0,6,1,3,14,1,0,12,2,12,3,2,1,13,0,11,14,15,9,12,13,8,15,12,14,9,13,9,11,8,1,6,7,4,5,0,7,4,2,0,5,6,3,15,14,0,13,12,12,15,3,1,14,13,11,10,14,9,8,12,8,11,15,14,10,9,9,10,11};
void register_floor3()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor3_vertices, sizeof(floor3_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor3_indices, sizeof(floor3_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
