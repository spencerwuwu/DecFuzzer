#ifndef s405retdec_H
#define s405retdec_H

#include "w2c2_base.h"

typedef struct s405retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s405retdecInstance;

void f0(s405retdecInstance*);

void f1(s405retdecInstance*);

U32 f2(s405retdecInstance*);

void f3(s405retdecInstance*,U32);

U32 f4(s405retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s405retdecInstance*,U32,U32,U32,U32,U32);

void f6(s405retdecInstance*,U32);

void f7(s405retdecInstance*,U32,U32,U32);

void f8(s405retdecInstance*,U32,U32,U32);

void s405retdec____wasm_call_ctors(s405retdecInstance*i);

void s405retdec____wasm_apply_data_relocs(s405retdecInstance*i);

U32 s405retdec_func_1(s405retdecInstance*i);

void s405retdec_call_cb(s405retdecInstance*i,U32 l0);

void s405retdecInstantiate(s405retdecInstance* instance, void* resolve(const char* module, const char* name));

void s405retdecFreeInstance(s405retdecInstance* instance);

#endif /* s405retdec_H */

