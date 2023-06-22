#ifndef s395r2_H
#define s395r2_H

#include "w2c2_base.h"

typedef struct s395r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s395r2Instance;

void f0(s395r2Instance*);

void f1(s395r2Instance*);

U32 f2(s395r2Instance*);

void f3(s395r2Instance*,U32);

U32 f4(s395r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s395r2Instance*,U32,U32,U32,U32,U32);

void f6(s395r2Instance*,U32);

void f7(s395r2Instance*,U32,U32,U32);

void f8(s395r2Instance*,U32,U32,U32);

void s395r2____wasm_call_ctors(s395r2Instance*i);

void s395r2____wasm_apply_data_relocs(s395r2Instance*i);

U32 s395r2_func_1(s395r2Instance*i);

void s395r2_call_cb(s395r2Instance*i,U32 l0);

void s395r2Instantiate(s395r2Instance* instance, void* resolve(const char* module, const char* name));

void s395r2FreeInstance(s395r2Instance* instance);

#endif /* s395r2_H */

