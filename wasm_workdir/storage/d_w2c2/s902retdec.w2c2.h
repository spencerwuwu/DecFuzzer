#ifndef s902retdec_H
#define s902retdec_H

#include "w2c2_base.h"

typedef struct s902retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s902retdecInstance;

void f0(s902retdecInstance*);

void f1(s902retdecInstance*);

U32 f2(s902retdecInstance*);

void f3(s902retdecInstance*,U32);

U32 f4(s902retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s902retdecInstance*,U32,U32,U32,U32,U32);

void f6(s902retdecInstance*,U32);

void f7(s902retdecInstance*,U32,U32,U32);

void f8(s902retdecInstance*,U32,U32,U32);

void s902retdec____wasm_call_ctors(s902retdecInstance*i);

void s902retdec____wasm_apply_data_relocs(s902retdecInstance*i);

U32 s902retdec_func_1(s902retdecInstance*i);

void s902retdec_call_cb(s902retdecInstance*i,U32 l0);

void s902retdecInstantiate(s902retdecInstance* instance, void* resolve(const char* module, const char* name));

void s902retdecFreeInstance(s902retdecInstance* instance);

#endif /* s902retdec_H */

