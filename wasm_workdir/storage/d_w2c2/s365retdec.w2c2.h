#ifndef s365retdec_H
#define s365retdec_H

#include "w2c2_base.h"

typedef struct s365retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s365retdecInstance;

void f0(s365retdecInstance*);

void f1(s365retdecInstance*);

U32 f2(s365retdecInstance*);

void f3(s365retdecInstance*,U32);

U32 f4(s365retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s365retdecInstance*,U32,U32,U32,U32,U32);

void f6(s365retdecInstance*,U32);

void f7(s365retdecInstance*,U32,U32,U32);

void f8(s365retdecInstance*,U32,U32,U32);

void s365retdec____wasm_call_ctors(s365retdecInstance*i);

void s365retdec____wasm_apply_data_relocs(s365retdecInstance*i);

U32 s365retdec_func_1(s365retdecInstance*i);

void s365retdec_call_cb(s365retdecInstance*i,U32 l0);

void s365retdecInstantiate(s365retdecInstance* instance, void* resolve(const char* module, const char* name));

void s365retdecFreeInstance(s365retdecInstance* instance);

#endif /* s365retdec_H */

