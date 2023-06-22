#ifndef s139retdec_H
#define s139retdec_H

#include "w2c2_base.h"

typedef struct s139retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s139retdecInstance;

void f0(s139retdecInstance*);

void f1(s139retdecInstance*);

U32 f2(s139retdecInstance*);

void f3(s139retdecInstance*,U32);

U32 f4(s139retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s139retdecInstance*,U32,U32,U32,U32,U32);

void f6(s139retdecInstance*,U32);

void f7(s139retdecInstance*,U32,U32,U32);

void f8(s139retdecInstance*,U32,U32,U32);

void s139retdec____wasm_call_ctors(s139retdecInstance*i);

void s139retdec____wasm_apply_data_relocs(s139retdecInstance*i);

U32 s139retdec_func_1(s139retdecInstance*i);

void s139retdec_call_cb(s139retdecInstance*i,U32 l0);

void s139retdecInstantiate(s139retdecInstance* instance, void* resolve(const char* module, const char* name));

void s139retdecFreeInstance(s139retdecInstance* instance);

#endif /* s139retdec_H */

