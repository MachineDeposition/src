GLshort floor1_vertices[] = {-8904,3377,832,8904,3377,832,-8904,-607,832,8904,-607,832,0,-5486,832,-10546,-1669,-871,-10546,4798,-871,10546,4798,-871,10546,-1669,-871,-0,-7449,-871,-8173,-133,-861,-8173,2724,-861,8173,2724,-861,8173,-133,-861,-0,-4612,-861,-8173,-133,832,-8173,2724,832,8173,2724,832,8173,-133,832,0,-4612,832};
const GLubyte floor1_indices[] = {1,8,3,5,0,2,8,4,3,4,5,2,6,1,0,3,17,1,16,2,0,19,3,4,2,19,4,17,0,1,13,17,18,11,15,16,14,18,19,10,19,15,12,16,17,11,13,14,1,7,8,5,6,0,8,9,4,4,9,5,6,7,1,3,18,17,16,15,2,19,18,3,2,15,19,17,16,0,13,12,17,11,10,15,14,13,18,10,14,19,12,11,16,14,10,11,11,12,13};
void register_floor1()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, floor1_vertices, sizeof(floor1_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, floor1_indices, sizeof(floor1_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 99;
    esModelArray_index++;
}
