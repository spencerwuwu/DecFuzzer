#ifndef s699retdec_H
#define s699retdec_H

#include "w2c2_base.h"

typedef struct s699retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s699retdecInstance;

void f0(s699retdecInstance*);

void f1(s699retdecInstance*);

U32 f2(s699retdecInstance*);

void f3(s699retdecInstance*,U32);

U32 f4(s699retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s699retdecInstance*,U32,U32,U32,U32,U32);

void f6(s699retdecInstance*,U32);

void f7(s699retdecInstance*,U32,U32,U32);

void f8(s699retdecInstance*,U32,U32,U32);

void s699retdec____wasm_call_ctors(s699retdecInstance*i);

void s699retdec____wasm_apply_data_relocs(s699retdecInstance*i);

U32 s699retdec_func_1(s699retdecInstance*i);

void s699retdec_call_cb(s699retdecInstance*i,U32 l0);

void s699retdecInstantiate(s699retdecInstance* instance, void* resolve(const char* module, const char* name));

void s699retdecFreeInstance(s699retdecInstance* instance);

#endif /* s699retdec_H */

