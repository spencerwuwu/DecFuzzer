#ifndef s252retdec_H
#define s252retdec_H

#include "w2c2_base.h"

typedef struct s252retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s252retdecInstance;

void f0(s252retdecInstance*);

void f1(s252retdecInstance*);

U32 f2(s252retdecInstance*);

void f3(s252retdecInstance*,U32);

U32 f4(s252retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s252retdecInstance*,U32,U32,U32,U32,U32);

void f6(s252retdecInstance*,U32);

void f7(s252retdecInstance*,U32,U32,U32);

void f8(s252retdecInstance*,U32,U32,U32);

void s252retdec____wasm_call_ctors(s252retdecInstance*i);

void s252retdec____wasm_apply_data_relocs(s252retdecInstance*i);

U32 s252retdec_func_1(s252retdecInstance*i);

void s252retdec_call_cb(s252retdecInstance*i,U32 l0);

void s252retdecInstantiate(s252retdecInstance* instance, void* resolve(const char* module, const char* name));

void s252retdecFreeInstance(s252retdecInstance* instance);

#endif /* s252retdec_H */

