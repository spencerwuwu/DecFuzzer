#ifndef s286retdec_H
#define s286retdec_H

#include "w2c2_base.h"

typedef struct s286retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s286retdecInstance;

void f0(s286retdecInstance*);

void f1(s286retdecInstance*);

U32 f2(s286retdecInstance*);

void f3(s286retdecInstance*,U32);

U32 f4(s286retdecInstance*,U32,U32,U32,U32);

void f5(s286retdecInstance*,U32,U32,U32,U32,U32);

void f6(s286retdecInstance*,U32);

void f7(s286retdecInstance*,U32,U32,U32);

void f8(s286retdecInstance*,U32,U32,U32);

void s286retdec____wasm_call_ctors(s286retdecInstance*i);

void s286retdec____wasm_apply_data_relocs(s286retdecInstance*i);

U32 s286retdec_func_1(s286retdecInstance*i);

void s286retdec_call_cb(s286retdecInstance*i,U32 l0);

void s286retdecInstantiate(s286retdecInstance* instance, void* resolve(const char* module, const char* name));

void s286retdecFreeInstance(s286retdecInstance* instance);

#endif /* s286retdec_H */

