#ifndef s247retdec_H
#define s247retdec_H

#include "w2c2_base.h"

typedef struct s247retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s247retdecInstance;

void f0(s247retdecInstance*);

void f1(s247retdecInstance*);

U32 f2(s247retdecInstance*);

void f3(s247retdecInstance*,U32);

void f4(s247retdecInstance*,U32);

void s247retdec____wasm_call_ctors(s247retdecInstance*i);

void s247retdec____wasm_apply_data_relocs(s247retdecInstance*i);

U32 s247retdec_func_1(s247retdecInstance*i);

void s247retdec_call_cb(s247retdecInstance*i,U32 l0);

void s247retdecInstantiate(s247retdecInstance* instance, void* resolve(const char* module, const char* name));

void s247retdecFreeInstance(s247retdecInstance* instance);

#endif /* s247retdec_H */

