void CInnovationScript::Queue() {
stAct newAct;
newAct.nAct = ACT_SPEAK; newAct.strTarget = "��궨�����˳�ʼλ��,20�����������"; newAct.nDuration = 20; arAct.push_back(newAct);
newAct.nAct = ACT_GOTO; newAct.strTarget = "kitchen"; arAct.push_back(newAct);
newAct.nAct = ACT_SPEAK; newAct.strTarget = "��ʼץȡ����"; newAct.nDuration = 5; arAct.push_back(newAct);
newAct.nAct = ACT_GRAB; newAct.strTarget = ""; newAct.nDuration = 5; arAct.push_back(newAct);
newAct.nAct = ACT_SPEAK; newAct.strTarget = "����ץȡ���"; newAct.nDuration = 2; arAct.push_back(newAct);
newAct.nAct = ACT_GOTO; newAct.strTarget = "master"; arAct.push_back(newAct);
newAct.nAct