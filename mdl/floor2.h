GLshort floor2_vertices[] = {-3877,-3493,832,3159,-3493,832,-3877,310,832,3159,3722,832,-5519,1373,-871,-5519,-5095,-871,4801,-5095,-871,4801,6939,-871,-3145,-163,-861,-3145,-3559,-861,2427,-3559,-861,2427,2530,-861,-3145,-163,832,-3145,-3020,832,2427,-3020,832,2427,2530,832};
const GLubyte floor2_indices[] = {6,3,1,4,0,2,3,4,2,5,1,0,15,1,3,13,2,0,2,15,3,1,13,0,11,14,15,13,8,12,8,15,12,10,13,14,8,10,11,6,7,3,4,5,0,3,7,4,5,6,1,15,14,1,13,12,2,2,12,15,1,14,13,11,10,14,13,9,8,8,11,15,10,9,13,8,9,10};
void register_floor2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor2_vertices, sizeof(floor2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor2_indices, sizeof(floor2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 78;
    esModelArray_index++;
}
