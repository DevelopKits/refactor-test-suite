// RefactorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TestAddParameter();
	TestAddRemoveBlockDelimiter();
	TestBooleanToEnum();
	TestBreakApartLineUpParameters();
	TestCollapseExpandAccessors();
	TestCombineConditionals();
	TestCompressToExpandFromTernaryExpression();
	TestConditionalToCase();
	TestCreateMethodStub();
	TestCreateSplitMultiVariableDeclaration();
	TestCreateOverload();
	TestCreateSetterMethod();
	TestDecomposeParameter();
	TestEncapsulateDowncast();
	TestEncapsulateField();
	TestExtractFunction();
	TestExtractInterface();
	TestExtractMethod();
	TestFlattenConditional();
	TestInlineRecentAssignment();
	TestInlineResult();
	TestInlineTemporary();
	TestIntroduceAlias();
	TestIntroduceConstant();
	TestIntroduceLocal();
	TestIntroduceParameter();
	TestIntroduceParameterObject();
	TestIntroduceResultVariable();
	TestMakeMethodStatic();
	TestMoveDeclarationNearReference();
	TestMoveInitializationToDeclaration();
	TestMoveMethod();
	TestMoveTypeToFile();
	TestMoveTypeToNamespace();
	TestOptimizeNamespaceReferences();
	PromoteToParameter::Test();
	TestReduceVisibility();
	TestRemoveAssignmentsToParameters();
	TestRemoveRedundantConditional();
	TestRename();
	TestRenameFileToMatchType();
	TestRenameTypeToMatchFile();
	TestReorderParameters();
	TestReplaceNestedConditionalWithGuardClause();
	TestReplaceTemporaryWithQuery();
	TestReplaceWithAlias();
	TestReplaceWithConstant();
	TestReplaceWithLocal();
	TestReverseConditional();
	TestSafeRename();
	TestSimplifyBooleanExpression();
	TestSplitInitializationFromDeclaration();
	TestSplitTemporaryVariable();
	TestWidenScope();
	TestWidenScopePromoteToConstant();
	TestWidenScopePromoteToField();

	return 0;
}